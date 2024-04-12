void fun()
{
  int entity_1 = 77;
  int entity_5 = 43;
  entity_1 = 29;
  char* entity_3;
  char* entity_6;
  char entity_4[72] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_4, 'B', 72-1);
  entity_4[72-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  memcpy(entity_6, entity_4, 72*sizeof(char));
}