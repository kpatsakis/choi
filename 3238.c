void fun()
{
  char* entity_4;
  char entity_7[68] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_2[7] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  memset(entity_2, 'p', 7-1);
  entity_2[7-1]='';
  memset(entity_7, 'Z', 68-1);
  entity_7[68-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memcpy(entity_1, entity_7, 68*sizeof(char));
}