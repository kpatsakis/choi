void fun()
{
  int entity_3 = 70;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memset(entity_7, 'M', entity_3-1);
  entity_7[entity_3-1]='';
  entity_3 = 57;
  memcpy(entity_4, entity_7, entity_3*sizeof(char));
}