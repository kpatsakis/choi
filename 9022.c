void fun()
{
  int entity_8 = 16;
  int entity_5 = 26;
  char entity_1[94] = "";
  entity_1 = NULL;
  char* entity_2;
  char* entity_4;
  memset(entity_1, 'q', 94-1);
  entity_1[94-1]='';
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[12-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 55;
  memcpy(entity_4, entity_1, 94*sizeof(char));
}