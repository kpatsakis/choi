void fun()
{
  int entity_0 = 85;
  char* entity_4;
  char entity_3[52] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  memset(entity_3, 'd', 52-1);
  entity_3[52-1]='';
  memcpy(entity_4, entity_3, 52*sizeof(char));
}