void fun()
{
  int entity_8 = 77;
  entity_8 = 60;
  char entity_4 = 'R';
  char entity_7[50] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'N', 50-1);
  entity_7[50-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_7, 50*sizeof(char));
}