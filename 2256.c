void fun()
{
  char entity_2[23] = "";
  entity_2 = NULL;
  char* entity_4;
  char* entity_3;
  memset(entity_2, 'I', 23-1);
  entity_2[23-1]='';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[71-1]='';
  entity_2[2] = 'z';
}