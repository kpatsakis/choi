void fun()
{
  int entity_0 = 52;
  int entity_1 = 10;
  int entity_8 = 1;
  char* entity_7;
  char entity_2[84] = "";
  entity_2 = NULL;
  char entity_6[19] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_2, 'W', 84-1);
  entity_2[84-1]='';
  memset(entity_6, 'G', 19-1);
  entity_6[19-1]='';
  memcpy(entity_7, entity_6, 19*sizeof(char));
}