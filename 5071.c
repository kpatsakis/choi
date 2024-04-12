void fun()
{
  char* entity_8;
  char* entity_5;
  char entity_2 = 's';
  char* entity_0;
  char entity_7[52] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  memset(entity_7, 'E', 52-1);
  entity_7[52-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memcpy(entity_8, entity_7, 52*sizeof(char));
}