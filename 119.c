void fun()
{
  int entity_9 = 34;
  int entity_7 = 21;
  char* entity_4;
  char entity_3[1] = "";
  entity_3 = NULL;
  char entity_8[100] = "";
  entity_8 = NULL;
  memset(entity_3, 'B', 1-1);
  entity_3[1-1]='';
  memset(entity_8, 'w', 100-1);
  entity_8[100-1]='';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  memcpy(entity_4, entity_8, 100*sizeof(char));
}