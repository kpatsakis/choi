void fun()
{
  int entity_4 = 26;
  char entity_7[35] = "";
  entity_7 = NULL;
  char entity_5 = 'A';
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memset(entity_7, 'w', 35-1);
  entity_7[35-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  memcpy(entity_3, entity_7, 35*sizeof(char));
}