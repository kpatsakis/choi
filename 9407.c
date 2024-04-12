void fun()
{
  int entity_1 = 48;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[75-1]='';
  memset(entity_0, 'p', entity_1-1);
  entity_0[entity_1-1]='';
  entity_1 = 90;
  memcpy(entity_2, entity_0, entity_1*sizeof(char));
}