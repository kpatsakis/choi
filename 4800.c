void fun()
{
  int entity_0 = 97;
  char entity_4[30] = "";
  entity_4 = NULL;
  char entity_2 = 'D';
  char* entity_1;
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  memset(entity_4, 'r', 30-1);
  entity_4[30-1]='';
  memcpy(entity_1, entity_4, 30*sizeof(char));
}