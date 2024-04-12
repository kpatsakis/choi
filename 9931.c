void fun()
{
  int entity_8 = 20;
  entity_8 = 13;
  char* entity_6;
  char* entity_2;
  char entity_0[92] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[64-1]='';
  memset(entity_0, 'E', 92-1);
  entity_0[92-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_0);
}