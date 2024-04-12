void fun()
{
  int entity_1 = 76;
  char* entity_3;
  char entity_7[67] = "";
  entity_7 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_7, 'z', 67-1);
  entity_7[67-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  memset(entity_4, 'F', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 16;
  entity_4[75] = 'c';
}