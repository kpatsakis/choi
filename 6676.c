void fun()
{
  int entity_3 = 46;
  char entity_1[93] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'r', 16-1);
  entity_9[16-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_1, 'd', 93-1);
  entity_1[93-1]='';
  strcpy(entity_7, entity_1);
}