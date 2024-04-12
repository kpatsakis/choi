void fun()
{
  char entity_0[69] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'o', 69-1);
  entity_0[69-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memcpy(entity_7, entity_0, 69*sizeof(char));
}