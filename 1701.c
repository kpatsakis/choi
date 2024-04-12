void fun()
{
  int entity_2 = 2;
  char entity_1[94] = "";
  entity_1 = NULL;
  char entity_3 = 'j';
  char* entity_5;
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  memset(entity_1, 'D', 94-1);
  entity_1[94-1]='';
  memcpy(entity_5, entity_1, 94*sizeof(char));
}