void fun()
{
  int entity_3 = 97;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'q', entity_3-1);
  entity_2[entity_3-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memcpy(entity_6, entity_2, entity_3*sizeof(char));
}