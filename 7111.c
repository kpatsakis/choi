void fun()
{
  int entity_4 = 75;
  int entity_8 = 3;
  char entity_7[32] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_1;
  char entity_0 = 'w';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_7, 'y', 32-1);
  entity_7[32-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_4 = 59;
  memcpy(entity_3, entity_7, 32*sizeof(char));
}