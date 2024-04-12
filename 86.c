void fun()
{
  int entity_6 = 16;
  char entity_8 = 'G';
  char* entity_3;
  char entity_2[28] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', 28-1);
  entity_2[28-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memcpy(entity_3, entity_2, 28*sizeof(char));
}