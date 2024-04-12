void fun()
{
  int entity_1 = 96;
  char entity_5[69] = "";
  entity_5 = NULL;
  char entity_2[82] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_5, 'O', 69-1);
  entity_5[69-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  memset(entity_2, 'B', 82-1);
  entity_2[82-1]='';
  memcpy(entity_6, entity_5, 69*sizeof(char));
}