void fun()
{
  int entity_2 = 65;
  char* entity_1;
  char entity_0 = 'h';
  char entity_8 = 'o';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', entity_2-1);
  entity_7[entity_2-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  memcpy(entity_1, entity_7, entity_2*sizeof(char));
}