void fun()
{
  int entity_2 = 86;
  char* entity_0;
  char* entity_9;
  char* entity_8;
  char entity_1 = 'o';
  char entity_6[10] = "";
  entity_6 = NULL;
  memset(entity_6, 'u', 10-1);
  entity_6[10-1]='';
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  strcpy(entity_8, entity_6);
}