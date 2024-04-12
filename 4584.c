void fun()
{
  int entity_6 = 17;
  entity_6 = 95;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'A', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  entity_2[48] = 'U';
}