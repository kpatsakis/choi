void fun()
{
  int entity_5 = 85;
  char entity_3[93] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_7;
  char entity_0 = 'E';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[29-1]='';
  memset(entity_3, 'a', 93-1);
  entity_3[93-1]='';
  memcpy(entity_1, entity_3, 93*sizeof(char));
}