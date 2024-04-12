void fun()
{
  int entity_3 = 62;
  int entity_7 = 20;
  char entity_2[80] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_8[92] = "";
  entity_8 = NULL;
  char entity_9[10] = "";
  entity_9 = NULL;
  memset(entity_2, 'e', 80-1);
  entity_2[80-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_9, 'V', 10-1);
  entity_9[10-1]='';
  memset(entity_8, 'I', 92-1);
  entity_8[92-1]='';
  entity_7 = 36;
  strcpy(entity_1, entity_8);
}