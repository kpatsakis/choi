void fun()
{
  int entity_1 = 57;
  entity_1 = 57;
  char* entity_3;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  memset(entity_2, 'r', entity_1-1);
  entity_2[entity_1-1]='';
  memset(entity_7, 'L', 34-1);
  entity_7[34-1]='';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  strcpy(entity_3, entity_2);
}