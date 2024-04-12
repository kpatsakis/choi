void fun()
{
  int entity_5 = 39;
  char* entity_7;
  char entity_4 = 'N';
  char* entity_2;
  char entity_8 = 'q';
  char entity_1[64] = "";
  entity_1 = NULL;
  memset(entity_1, 'D', 64-1);
  entity_1[64-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memcpy(entity_2, entity_1, 64*sizeof(char));
}