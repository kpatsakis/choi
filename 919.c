void fun()
{
  int entity_1 = 10;
  char entity_3[30] = "";
  entity_3 = NULL;
  char entity_2[2] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_3, 'e', 30-1);
  entity_3[30-1]='';
  memset(entity_2, 'Y', 2-1);
  entity_2[2-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memcpy(entity_7, entity_3, 30*sizeof(char));
}