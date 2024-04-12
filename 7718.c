void fun()
{
  int entity_5 = 32;
  char* entity_2;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[83-1]='';
  memset(entity_7, 'T', entity_5-1);
  entity_7[entity_5-1]='';
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  memcpy(entity_2, entity_7, entity_5*sizeof(char));
}