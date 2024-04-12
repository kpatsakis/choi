void fun()
{
  char* entity_3;
  char* entity_1;
  char* entity_8;
  char entity_2[68] = "";
  entity_2 = NULL;
  memset(entity_2, 'Q', 68-1);
  entity_2[68-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[62-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  memcpy(entity_8, entity_2, 68*sizeof(char));
}