void fun()
{
  char* entity_8;
  char entity_4[69] = "";
  entity_4 = NULL;
  char entity_3 = 'B';
  memset(entity_4, 'A', 69-1);
  entity_4[69-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  memcpy(entity_8, entity_4, 69*sizeof(char));
}