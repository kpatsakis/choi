void fun()
{
  int entity_9 = 59;
  int entity_0 = 9;
  char* entity_3;
  char entity_1[3] = "";
  entity_1 = NULL;
  char entity_6[84] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'S', 84-1);
  entity_6[84-1]='';
  memset(entity_1, 'g', 3-1);
  entity_1[3-1]='';
  entity_9 = 48;
  strcpy(entity_3, entity_1);
}