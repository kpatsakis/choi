void fun()
{
  int entity_1 = 75;
  char* entity_4;
  char entity_8[84] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_8, 'h', 84-1);
  entity_8[84-1]='';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  entity_1 = 43;
  memcpy(entity_7, entity_8, 84*sizeof(char));
}