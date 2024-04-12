void fun()
{
  int entity_8 = 9;
  char entity_9 = 'p';
  char entity_7[68] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_4 = 'j';
  memset(entity_7, 'm', 68-1);
  entity_7[68-1]='';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  memcpy(entity_1, entity_7, 68*sizeof(char));
}