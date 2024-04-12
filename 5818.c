void fun()
{
  int entity_2 = 50;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'n', entity_2-1);
  entity_3[entity_2-1]='';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  entity_3[4] = 'x';
}