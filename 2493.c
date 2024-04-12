void fun()
{
  int entity_0 = 55;
  entity_0 = 26;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_8 = 'K';
  char entity_2[59] = "";
  entity_2 = NULL;
  memset(entity_1, 'O', 24-1);
  entity_1[24-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_2, 'n', 59-1);
  entity_2[59-1]='';
  memcpy(entity_9, entity_2, 59*sizeof(char));
}