void fun()
{
  char entity_7[20] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_2[68] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  memset(entity_7, 'z', 20-1);
  entity_7[20-1]='';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[79-1]='';
  memset(entity_2, 'o', 68-1);
  entity_2[68-1]='';
  strcpy(entity_3, entity_2);
}