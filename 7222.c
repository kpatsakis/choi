void fun()
{
  int entity_6 = 16;
  entity_6 = 76;
  char entity_7[92] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_1;
  memset(entity_7, 'n', 92-1);
  entity_7[92-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  strcpy(entity_0, entity_7);
}