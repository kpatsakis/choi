void fun()
{
  int entity_2 = 13;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  memset(entity_6, 'o', entity_2-1);
  entity_6[entity_2-1]='';
  memcpy(entity_4, entity_6, entity_2*sizeof(char));
}