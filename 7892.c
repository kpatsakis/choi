void fun()
{
  char entity_7[77] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_1 = 'A';
  char* entity_8;
  char entity_2[55] = "";
  entity_2 = NULL;
  memset(entity_7, 'i', 77-1);
  entity_7[77-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  memset(entity_2, 'b', 55-1);
  entity_2[55-1]='';
  memcpy(entity_6, entity_2, 55*sizeof(char));
}