void fun()
{
  int entity_9 = 81;
  int entity_8 = 62;
  char* entity_2;
  char* entity_7;
  char entity_0 = 'l';
  char entity_3[64] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  memset(entity_3, 'N', 64-1);
  entity_3[64-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memcpy(entity_2, entity_3, 64*sizeof(char));
}