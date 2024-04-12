void fun()
{
  int entity_3 = 14;
  char entity_7[52] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'P', 52-1);
  entity_7[52-1]='';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  entity_7[59] = 'B';
}