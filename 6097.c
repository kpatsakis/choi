void fun()
{
  int entity_4 = 60;
  int entity_6 = 64;
  char entity_2[20] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_3 = 'p';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_2, 'B', 20-1);
  entity_2[20-1]='';
  memcpy(entity_7, entity_2, 20*sizeof(char));
}