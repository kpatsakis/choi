void fun()
{
  int entity_2 = 99;
  entity_2 = 39;
  char* entity_6;
  char* entity_4;
  char entity_7[50] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_7, 'n', 50-1);
  entity_7[50-1]='';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[89-1]='';
  memcpy(entity_6, entity_7, 50*sizeof(char));
}