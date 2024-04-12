void fun()
{
  int entity_7 = 94;
  char entity_5[2] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_8;
  char entity_4 = 'N';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_5, 'l', 2-1);
  entity_5[2-1]='';
  memcpy(entity_3, entity_5, 2*sizeof(char));
}