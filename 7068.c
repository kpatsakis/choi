void fun()
{
  int entity_3 = 99;
  int entity_1 = 60;
  int entity_5 = 39;
  entity_1 = 47;
  char entity_7[5] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_8;
  entity_6 = (char*)malloc(15*sizeof(char));
  entity_6[15-1]='';
  memset(entity_7, 's', 5-1);
  entity_7[5-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_7, 5*sizeof(char));
}