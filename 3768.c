void fun()
{
  int entity_1 = 79;
  int entity_5 = 76;
  char* entity_0;
  char* entity_6;
  char entity_3[61] = "";
  entity_3 = NULL;
  char entity_8[27] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  memset(entity_8, 'z', 27-1);
  entity_8[27-1]='';
  memset(entity_3, 'r', 61-1);
  entity_3[61-1]='';
  entity_1 = 92;
  memcpy(entity_6, entity_3, 61*sizeof(char));
}