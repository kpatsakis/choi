void fun()
{
  int entity_7 = 27;
  int entity_1 = 12;
  entity_1 = 9;
  char* entity_8;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'z', entity_1-1);
  entity_3[entity_1-1]='';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[13-1]='';
  memcpy(entity_8, entity_3, entity_1*sizeof(char));
}