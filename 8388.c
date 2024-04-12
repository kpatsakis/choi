void fun()
{
  int entity_1 = 33;
  int entity_0 = 6;
  char* entity_4;
  char entity_5[53] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_8;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_5, 'V', 53-1);
  entity_5[53-1]='';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[74-1]='';
  strcpy(entity_8, entity_5);
}