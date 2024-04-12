void fun()
{
  int entity_0 = 61;
  char* entity_2;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  memset(entity_4, 'X', entity_0-1);
  entity_4[entity_0-1]='';
  entity_0 = 74;
  memcpy(entity_2, entity_4, entity_0*sizeof(char));
}