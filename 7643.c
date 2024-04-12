void fun()
{
  int entity_3 = 43;
  int entity_2 = 50;
  char entity_7[42] = "";
  entity_7 = NULL;
  char* entity_6;
  char* entity_9;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memset(entity_7, 'e', 42-1);
  entity_7[42-1]='';
  entity_2 = 34;
  memcpy(entity_6, entity_7, 42*sizeof(char));
}