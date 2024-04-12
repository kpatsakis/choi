void fun()
{
  int entity_6 = 6;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  memset(entity_2, 'x', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[74] = 'T';
}