void fun()
{
  int entity_7 = 40;
  char* entity_1;
  char entity_4[52] = "";
  entity_4 = NULL;
  memset(entity_4, 'r', 52-1);
  entity_4[52-1]='';
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[20-1]='';
  memcpy(entity_1, entity_4, 52*sizeof(char));
}